//
//  CSSColorsViewController.h
//  CSSColors
//
//  Created by Tom Adriaenssen on 15/01/11.

#import <UIKit/UIKit.h>

@interface CSSColorsViewController : UIViewController {
	UITextField* cssTextField;
	UIView* colorTarget;
}

@property (nonatomic, retain) IBOutlet UITextField* cssTextField;
@property (nonatomic, retain) IBOutlet UIView* colorTarget;
-(IBAction)cssTextChanged;

@end

