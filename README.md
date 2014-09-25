## The problem
Apple rejects your apps if G+ login goes off to a Safari or Chrome window when you don't have the G+ app installed: yes, it's a standard bahavior, but yes, they don't care.

This will be a sample app to show you how to implement:
- A way to prevent the switch to Chrome or Safari
- A way to handle the authentication via a UIWebView and get back to the app once done

This sample is based on putting pieces together from these solutions:
- https://code.google.com/p/google-plus-platform/issues/detail?id=900
- http://stackoverflow.com/questions/15281386/google-iphone-api-sign-in-and-share-without-leaving-app
- http://stackoverflow.com/questions/15436352/ios-google-plus-api-sharing-or-logging-in-without-going-to-safari

## Credits
Kudos to [Marco](https://github.com/marcobrambilla), who helped me out in the midst of the crisis of a rejected app.

## Prerequisites
- Basic knowledge of Google Plus SDK (v. 1.7.1)
- Basic knowledge on [how to setup a Goole Plus app](https://developers.google.com/+/mobile/ios/getting-started)

## What's the deal
1. You have to subclass UIApplication to re-implement openURL

2. You need a UIViewController with a UIWebView inside

3. You have to launch that view controller from the G+ login button

4. Then you login though the webview, and one you are done, the modal is dismissed and you are logged in G+
