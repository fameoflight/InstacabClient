//
//  ICPaymentViewController.h
//  InstaCab
//
//  Created by Pavel Tisunov on 13/06/14.
//  Copyright (c) 2014 Bright Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QuickDialog.h"
#import "ICLinkCardController.h"

@interface ICPaymentViewController : QuickDialogController<QuickDialogEntryElementDelegate, LinkCardControllerDelegate>

@end
