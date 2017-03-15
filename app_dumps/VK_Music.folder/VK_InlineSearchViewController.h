/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import "VK_BaseTableViewController.h"
#import "VK_Music-Structs.h"

@class NSArray, VK_InlineSearchConfiguration, VK_SearchView, UIView, VK_Button, NSLayoutConstraint, BFCancellationTokenSource, NSString;

__attribute__((visibility("hidden")))
@interface VK_InlineSearchViewController : VK_BaseTableViewController <UIGestureRecognizerDelegate> {
	BOOL _needToHandleFocus;
	UIView* _containerView;
	VK_InlineSearchConfiguration* _configuration;
	UIView* _navigationBarContainerView;
	VK_Button* _cancelButtonView;
	UIView* _fadeView;
	UIView* _noResultsView;
	VK_SearchView* _searchView;
	NSLayoutConstraint* _fakeNavigationBarShadowViewHeightConstraint;
	NSLayoutConstraint* _noResultsViewCenterYConstraint;
	NSArray* _searchViewOriginalConstraints;
	NSArray* _searchViewNavigationBarConstraints;
	unsigned _state;
	BFCancellationTokenSource* _searchCancellationTokenSource;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VK_InlineSearchConfiguration* configuration;
@property(assign, nonatomic) BOOL needToHandleFocus;
@property(retain, nonatomic) BFCancellationTokenSource* searchCancellationTokenSource;
@property(assign, nonatomic) unsigned state;
@property(retain, nonatomic) NSArray* searchViewNavigationBarConstraints;
@property(retain, nonatomic) NSArray* searchViewOriginalConstraints;
@property(assign, nonatomic) __weak NSLayoutConstraint* noResultsViewCenterYConstraint;
@property(assign, nonatomic) __weak NSLayoutConstraint* fakeNavigationBarShadowViewHeightConstraint;
@property(assign, nonatomic) __weak VK_SearchView* searchView;
@property(assign, nonatomic) __weak UIView* noResultsView;
@property(assign, nonatomic) __weak UIView* fadeView;
@property(assign, nonatomic) __weak VK_Button* cancelButtonView;
@property(assign, nonatomic) __weak UIView* navigationBarContainerView;
@property(assign, nonatomic) __weak UIView* containerView;
-(void).cxx_destruct;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)dataProviderDidFetchingEnded:(id)dataProvider;
-(void)dataProviderDidFetchingStarted:(id)dataProvider;
-(void)actualizeState;
-(void)cancelButtonPressed:(id)pressed;
-(void)searchWithText:(id)text;
-(void)searchTextChanged:(id)changed;
-(void)dismiss;
-(void)configureStateAnimated:(BOOL)animated;
-(void)configureViews;
-(void)configureForCurrentScreenSize;
-(id)internalCreateTableControllerConfiguration;
-(void)internalSetup;
-(void)moveSearchViewWithPositionFlag:(BOOL)positionFlag;
-(void)addSearchView:(id)view withFrame:(CGRect)frame;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
@end
