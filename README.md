GPGMail
=======

GPGMail is a plugin for OS X's Mail.app, which let's you  
send and receive secure, OpenPGP encrypted and signed messages.

Important
-------

GPGMail developed by GPGTools Gmbh has recently moved from free and open-source to a subscription payment model. That being said, the project GPGMail itself is still open-source so I forked it and removed any checks for an active subscription.

That being said, I am not providing compiled binaries until I'm sure anything I distribute doesn't conflict with the original license used. For now you have to build it yourself.

**ONLY TESTED ON MOJAVE, I don't guarantee this will work on High Sierra**


Prerequisite
------------

Install GPGSuite (latest) from the [GPGTools](https://gpgtools.org) website. 


Installing
-----

#### 1. Clone the repository
```bash
git clone https://github.com/awkimball/GPGMail.git
cd GPGMail
```

#### 2. Get/Build Dependencies


```bash
cd Dependencies
git clone https://github.com/GPGTools/Libmacgpg.git
cd Libmacgpg
make
cd ../..
```
As seen above, Libmacgpg must be built with `make` after cloning.

#### 3. Build GPGMail

From your top-level GPGMail directory:

```bash
make
```

#### 4. Install

* Quit `Mail.app`
* In finder, navigate to `/Library/Application_Support/GPGTools/GPGMail/` and move the `GPGMail_XX.mailbundle` file to somewhere like the Desktop for temporary safe keeping. 
* In your `GPGMail` repository that you cloned in Step 1 and built in Step 3, navigate to `build/Release/`
* Rename `GPGMail.mailbundle` to `GPGMail_XX.mailbundle` replacing `XX` with the number from the file you moved to the Desktop.
* Move/copy your new `GPGMail_XX.mailbundle` to `/Library/Application_Support/GPGTools/GPGMail/`
* Launch Mail.app
* Done! If you check the GPGMail preference pane it should show a valid activation.



