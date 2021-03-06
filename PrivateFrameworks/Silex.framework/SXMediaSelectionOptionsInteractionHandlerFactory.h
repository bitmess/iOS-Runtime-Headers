/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMediaSelectionOptionsInteractionHandlerFactory : NSObject <SXVideoInteractionHandlerFactory> {
    SXMediaSelectionController * _mediaSelectionController;
    <SXMediaSelectionViewControllerFactory> * _mediaSelectionOptionsViewControllerFactory;
    <SXPlaybackCoordinatorProviding> * _playbackCoordinatorProvider;
    <SXViewControllerPresenting> * _viewControllerPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXMediaSelectionController *mediaSelectionController;
@property (nonatomic, readonly) <SXMediaSelectionViewControllerFactory> *mediaSelectionOptionsViewControllerFactory;
@property (nonatomic, readonly) <SXPlaybackCoordinatorProviding> *playbackCoordinatorProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXViewControllerPresenting> *viewControllerPresenter;

- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithPlaybackCoordinatorProvider:(id)arg1 mediaSelectionController:(id)arg2 mediaSelectionOptionsViewControllerFactory:(id)arg3 viewControllerPresenter:(id)arg4;
- (id)mediaSelectionController;
- (id)mediaSelectionOptionsViewControllerFactory;
- (id)playbackCoordinatorProvider;
- (id)viewControllerPresenter;

@end
