//
//  ViewController.h
//  GooglePlusLoginWebView
//
//  Created by Davide Tarasconi on 25/09/14.
//  Copyright (c) 2014 Davide Trasconi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GooglePlus/GooglePlus.h>

@class GPPSignInButton;

@interface ViewController : UIViewController <GPPSignInDelegate>

@property (retain, nonatomic) IBOutlet GPPSignInButton *signInButton;

@end

