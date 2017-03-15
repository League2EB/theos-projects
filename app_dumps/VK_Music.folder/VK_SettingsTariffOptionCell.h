/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_Music-Structs.h"
#import "VK_TableViewCellBase.h"

@class VK_BaseLabel, UIActivityIndicatorView, VK_Button, UIView, VK_TariffModel, VK_SettingsTariffOptionCellProxy, VK_SettingsTariffOptionCellViewModel;

__attribute__((visibility("hidden")))
@interface VK_SettingsTariffOptionCell : VK_TableViewCellBase {
	VK_BaseLabel* _nameLabel;
	VK_BaseLabel* _hoursLabel;
	UIView* _priceView;
	VK_BaseLabel* _priceLabel;
	VK_BaseLabel* _periodLabel;
	VK_Button* _priceButtonView;
	UIView* _overview;
	UIActivityIndicatorView* _activityIndicator;
}
@property(assign, nonatomic) __weak UIActivityIndicatorView* activityIndicator;
@property(assign, nonatomic) __weak UIView* overview;
@property(assign, nonatomic) __weak VK_Button* priceButtonView;
@property(assign, nonatomic) __weak VK_BaseLabel* periodLabel;
@property(assign, nonatomic) __weak VK_BaseLabel* priceLabel;
@property(assign, nonatomic) __weak UIView* priceView;
@property(assign, nonatomic) __weak VK_BaseLabel* hoursLabel;
@property(assign, nonatomic) __weak VK_BaseLabel* nameLabel;
@property(readonly, assign, nonatomic) VK_SettingsTariffOptionCellViewModel* viewModel;
@property(readonly, assign, nonatomic) VK_TariffModel* data;
@property(readonly, assign, nonatomic) VK_SettingsTariffOptionCellProxy* proxy;
+(BOOL)internalCanHaveSeparator;
+(id)internalNibName;
-(void).cxx_destruct;
-(id)localizedPriceForStoreProduct:(id)storeProduct;
-(void)tariffSelectButtonPressed:(id)pressed;
-(void)updateWithTariff:(id)tariff;
-(void)internalUpdateData;
-(void)internalSetup;
@end
