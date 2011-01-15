//
//  CSSColorsAppDelegate.h
//  CSSColors
//
//  Created by Tom Adriaenssen on 15/01/11.
//

#import <UIKit/UIKit.h>

@class CSSColorsViewController;

@interface CSSColorsAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    CSSColorsViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet CSSColorsViewController *viewController;

@end

