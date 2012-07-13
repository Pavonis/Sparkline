//
//  SLViewController.h
//  Sparkline
//
//  Created by Sean Moore on 7/10/12.
//  Copyright (c) 2012 Sean Moore. All rights reserved.
//

/* Sparkline is a simple class that produces simple and clean sparklines to display trends of univariate data against the index it is ordered in. Sparkline was originally developed as part of a larger data visualisation project to displaying changes in quantity over the course of discrete events.
 
    Getting Started:
    
    Sparklines is highly customizable and with so many properties, it can be difficult to determine exactly where to start.  However, producing a great-looking visualisation is a simple two-step process. First, provide an NSArray of NSNumber values representing your data. Second, call the initWithData method. That's it. Sparkline is wise, and is setup to look great with minimal fuss. Should you ever require to mess with a beautiful thing, however, Sparkline is flexible, allowing control for nearly every visual aspect. Do note however, that Sparkline was designed to be ugly-proof; should you make an erroneous design decision, Sparkline may disagree. Not-so-subtly prodding you to make a better decision is a feature, not a bug.
 */

#import <UIKit/UIKit.h>

@interface SLViewController : UIViewController

#pragma mark Properties

@property NSArray * data;
@property BOOL verticalAxisIsVisible;
@property NSRange * verticalAxisRange; // Override to set-nonstandard ranges for sparkline to be drawn over (this will not adjust the size of the range, only the numeric range).
@property BOOL horizontalAxisIsVisible;
@property NSRange * horizontalAxisRange; // Override to set-nonstandard ranges for sparkline to be drawn over (this will not adjust the size of the range, only the numeric range).
@property BOOL verticalLabelisVisible;
@property NSString * verticalLabel;
@property BOOL verticalLabelOrientationIsHorizontal; // Yes, you can set your text to be vertically oriented.
@property BOOL horizontalLabelIsVisible;
@property NSString * horizontalLabel;
@property BOOL verticalTickmarksAreVisible;
@property BOOL horizontalTickmarksAreVisible;
@property double verticalTickMarkSpacing; // Accepts a value between zero and 1, inclusive. 0 indicates every value should have a tick mark, while one correlates to tickmarks at the minimum and maximum values only; please note that intermediate values arent exceedingly precise, so don't be a jackass and specifiy five decimal places.
@property double horizontalTickMarkSpacing; // Accepts a value between zero and 1, inclusive. 0 indicates every value should have a tick mark, while one correlates to tickmarks at the minimum and maximum values only; please note that intermediate values arent exceedingly precise, so don't be a jackass and specifiy five decimal places.
@property BOOL axesAreSeparated; // default is YES; this is an all-or-nothing property currently.
@property NSString * sparklineTitle;
@property NSString * sparklineSubtitle;
@property NSString * AdditionalInfo;

@property UIColor * sparklineColor;
@property CGFloat sparklineStroke;

#pragma mark Initializers



#pragma mark Advanced Methods



@end

