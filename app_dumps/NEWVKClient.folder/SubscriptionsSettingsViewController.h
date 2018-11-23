/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MOCTLabelDelegate.h"
#import "VKMLiveController.h"
#import "VKClient-Structs.h"

@class UIView, NSString, SubscriptionsSettingsModel;

__attribute__((visibility("hidden")))
@interface SubscriptionsSettingsViewController : VKMLiveController <MOCTLabelDelegate> {
	UIView* _footerView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIView* footerView;
@property(retain, nonatomic) SubscriptionsSettingsModel* model;
+(id)textAttributes;
-(void).cxx_destruct;
-(BOOL)route:(id)route;
-(void)moctlabel:(id)moctlabel linkClicked:(id)clicked;
-(void)notificationPurchase:(id)purchase;
-(void)notificationStore:(id)store;
-(int)VKMTableStyle;
-(id)footerAttributedString;
-(id)VKMScrollViewIndexFromModel:(id)model;
-(void)actionActions:(id)actions;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithMain:(id)main andModel:(id)model;
@end
