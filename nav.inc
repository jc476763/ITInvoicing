    <nav class="container navbar navbar-expand-lg bg-dark navbar-dark" style="border-radius: 5px;">
        <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#collapsibleNavbar">
            <span class="navbar-toggler-icon"></span>
        </button>
        <div class="collapse navbar-collapse" id="collapsibleNavbar">
            <!-- md-auto: left, ml-auto: right, mx-auto: center -->
            <ul class="navbar-nav md-auto">
                <li class="nav-item"><a class="nav-link" id="0" onClick="nav_item_selected(0)" href="index.php">Home</a></li>
                <!-- Dropdown -->
                <li class="nav-item dropdown">
                    <a class="nav-link dropdown-toggle" href="#" id="1" onClick="nav_item_selected(1)" data-toggle="dropdown">
                        Dropdown
                    </a>
                    <div class="dropdown-menu">
                        <a class="dropdown-item" href="feedback.php">Feedback</a>
                        <a class="dropdown-item" href="products.php">Products</a>
                        <a class="dropdown-item" href="mit_mba.php">MIT-MBA</a>
                    </div>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="it_news.php" id="2" onClick="nav_item_selected(2)">IT News</a>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="about_us.php" id="3" onClick="nav_item_selected(3)">About Us</a>
                </li>
                <?php if(isset($_SESSION['valid_user'])): ?>
                <li class="nav-item">
                    <a class="nav-link" href="member_only.php" id="4" onClick="nav_item_selected(4)"><?php echo $_SESSION['name']; ?></a>
                </li>
                <li class="nav-item">
                    <!-- <a class="nav-link" href="member.php" id="5" style="display: none;">Sign-up</a> -->
                    <a class="nav-link" href="logout.php" id="5" onClick="nav_item_selected(4)">Sign-out</a>
                </li>
                <?php else: ?>
                <li class="nav-item">
                    <a class="nav-link" href="login.php" id="4" onClick="nav_item_selected(4)">Sign-in</a>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="member.php" id="5" onClick="nav_item_selected(5)">Sign-up</a>
                </li>
                <?php endif; ?>
            </ul>
        </div>
        <form class="form-inline" action="search.php">
            <input class="form-control mr-sm-2" type="Search" name="key" placeholder="Search">
            <button class="btn light my-sm-0" type="submit">Search</button>
        </form>
    </nav>

