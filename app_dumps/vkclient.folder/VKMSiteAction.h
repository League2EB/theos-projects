/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIWebViewDelegate.h"

@class NSString, SiteActionController;

__attribute__((visibility("hidden")))
@interface VKMSiteAction : XXUnknownSuperclass <UIWebViewDelegate> {
	SiteActionController* _weakController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) SiteActionController* weakController;
+(BOOL)handledBlankRedirect:(id)redirect block:(id)block;
-(void)webViewDidFinishLoad:(id)webView;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)cancel;
-(id)targetURL;
@end
