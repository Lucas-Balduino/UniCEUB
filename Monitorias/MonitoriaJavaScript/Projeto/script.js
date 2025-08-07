// Função para inicializar a página principal
function initMainPage() {
    console.log("Página principal inicializada");
}

// Função para inicializar a página de wish list
function initWishListPage() {
    let wishList = JSON.parse(localStorage.getItem('wishList')) || [];

    if (wishList.length === 0) {
        displayEmptyMessage();
    } else {
        displayWishList(wishList);
    }
}

// Função para exibir a mensagem de lista vazia
function displayEmptyMessage() {
    document.getElementById('main-content').innerHTML = `
        <div class="no-products">
            <p>Sem Produtos :(</p>
            <p>Procure Produtos para adicionar!</p>
            <button class="return-button" onclick="location.href='index.html'">Produtos</button>
        </div>
    `;
}

// Função para exibir a wish list
function displayWishList(wishList) {
    let productGrid = document.createElement('div');
    productGrid.className = 'products-grid';

    wishList.forEach(product => {
        let productCard = document.createElement('div');
        productCard.className = 'product-card';

        productCard.innerHTML = `
            <div class="product-image"></div>
            <div class="product-details">
                <p>${product.name}</p>
                <p>Marca</p>
            </div>
            <div class="quantity-controls">
                <button onclick="changeQuantity('${product.name}', -1)">-</button>
                <input type="text" value="${product.quantity}" readonly>
                <button onclick="changeQuantity('${product.name}', 1)">+</button>
            </div>
            <p class="total">R$${product.price * product.quantity}</p>
            <button onclick="removeFromWishList('${product.name}')">Remover</button>
        `;

        productGrid.appendChild(productCard);
    });

    let totalPrice = wishList.reduce((total, product) => total + (product.price * product.quantity), 0);
    let totalElement = document.createElement('div');
    totalElement.className = 'total';
    totalElement.innerHTML = `Total: R$${totalPrice}`;

    let continueButton = document.createElement('button');
    continueButton.className = 'continue-button';
    continueButton.textContent = 'Continuar';
    continueButton.onclick = () => alert('Continuar com a compra');

    document.getElementById('main-content').appendChild(productGrid);
    document.getElementById('main-content').appendChild(totalElement);
    document.getElementById('main-content').appendChild(continueButton);
}

// Função para alterar a quantidade de um produto
function changeQuantity(productName, change) {
    let wishList = JSON.parse(localStorage.getItem('wishList')) || [];
    let product = wishList.find(p => p.name === productName);

    if (product) {
        product.quantity += change;
        if (product.quantity < 1) {
            product.quantity = 1;
        }
        localStorage.setItem('wishList', JSON.stringify(wishList));
        location.reload();
    }
}

// Função para remover um produto da wish list
function removeFromWishList(productName) {
    let wishList = JSON.parse(localStorage.getItem('wishList')) || [];
    wishList = wishList.filter(p => p.name !== productName);
    localStorage.setItem('wishList', JSON.stringify(wishList));
    location.reload();
}

// Função para adicionar um produto à wish list
function addToWishList(name, price) {
    let wishList = JSON.parse(localStorage.getItem('wishList')) || [];
    let product = wishList.find(p => p.name === name);

    if (product) {
        product.quantity += 1;
    } else {
        wishList.push({ name: name, price: price, quantity: 1 });
    }

    localStorage.setItem('wishList', JSON.stringify(wishList));
    alert('Produto adicionado à lista de desejos');
}

// Inicializa a página ao carregar
window.onload = function() {
    const path = window.location.pathname;
    if (path.endsWith('index.html')) {
        initMainPage();
    } else if (path.endsWith('wishlist.html')) {
        initWishListPage();
    }
};
