/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIPopoverController, SUScriptViewController;

@interface SUScriptPopOver : SUScriptObject  {
    BOOL _ignoreDismiss;
}

@property(retain) UIPopoverController * nativePopoverController;
@property float contentHeight;
@property float contentWidth;
@property(retain) SUScriptViewController * viewController;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (id)init;
- (void)dealloc;
- (void)dismissAnimated:(id)arg1;
- (float)contentWidth;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)attributeKeys;
- (void)_setIgnoresDismiss:(BOOL)arg1;
- (void)setContentWidth:(float)arg1;
- (void)setContentHeight:(float)arg1;
- (float)contentHeight;
- (BOOL)showFromNavigationItem:(id)arg1;
- (BOOL)showFromElement:(id)arg1;
- (void)setContentWidth:(float)arg1 height:(float)arg2 animated:(BOOL)arg3;
- (void)setNativePopoverController:(id)arg1;
- (id)nativePopoverController;
- (void)_showAsModalViewController;
- (BOOL)_isViewControllerVisible;
- (id)_activeViewController;
- (id)_nativeViewController;
- (void)_setNativeViewController:(id)arg1;
- (void)_showFromNavigationItem:(id)arg1;
- (void)_showFromDOMElement:(id)arg1;
- (id)_popOverController;
- (BOOL)_shouldDisplayAsPopover;
- (void)_dismissAnimated:(BOOL)arg1;
- (void)_viewControllerDidDismiss:(id)arg1;
- (void)_overlayWillShowNotification:(id)arg1;
- (void)tearDownUserInterface;
- (id)_className;
- (id)scriptAttributeKeys;

@end