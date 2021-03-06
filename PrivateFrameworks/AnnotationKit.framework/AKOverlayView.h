/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKOverlayView : UIView {
    bool  _deferWasMovedToSuperviewUntilMoveToWindow;
    bool  _isObserving;
    AKMainEventHandler * _mainEventHandler;
    UIScrollView * _observedScrollView;
    AKPageController * _pageController;
    bool  _scrollViewIsInLiveMagnify;
}

@property bool deferWasMovedToSuperviewUntilMoveToWindow;
@property bool isObserving;
@property AKMainEventHandler *mainEventHandler;
@property (retain) UIScrollView *observedScrollView;
@property AKPageController *pageController;
@property bool scrollViewIsInLiveMagnify;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_postScrollViewNotification;
- (void)_scrollViewDidEndAnimation:(id)arg1;
- (void)_scrollViewDidEndDecelerating:(id)arg1;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewDidScrollToTop:(id)arg1;
- (void)_setupObservation;
- (void)_teardownObservation;
- (void)_updateLayersUsingScrollView;
- (void)_updateLayersUsingScrollViewWithForcedUpdate:(bool)arg1;
- (void)_wasMovedToNewSuperview;
- (void)_willEndLiveMagnify:(id)arg1;
- (void)_willRemoveFromOldSuperview;
- (void)_willStartLiveMagnify:(id)arg1;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (bool)deferWasMovedToSuperviewUntilMoveToWindow;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithPageController:(id)arg1;
- (bool)isObserving;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)mainEventHandler;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedScrollView;
- (id)pageController;
- (bool)scrollViewIsInLiveMagnify;
- (void)setDeferWasMovedToSuperviewUntilMoveToWindow:(bool)arg1;
- (void)setIsObserving:(bool)arg1;
- (void)setMainEventHandler:(id)arg1;
- (void)setObservedScrollView:(id)arg1;
- (void)setPageController:(id)arg1;
- (void)setScrollViewIsInLiveMagnify:(bool)arg1;
- (void)superTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)superTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)superTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)superTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateLayers;
- (void)willMoveToSuperview:(id)arg1;

@end
