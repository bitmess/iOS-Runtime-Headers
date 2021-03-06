/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPlaybackCoordinatorManager : NSObject <SXPlaybackCoordinatorProviding, SXVolumeObserving> {
    <SXPlaybackCoordinatorFactory> * _factory;
    NSMapTable * _playbackCoordinators;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXPlaybackCoordinatorFactory> *factory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *playbackCoordinators;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)factory;
- (id)initWithPlaybackCoordinatorFactory:(id)arg1;
- (void)muteStateChanged:(id)arg1;
- (id)playbackCoordinatorForVideo:(id)arg1;
- (id)playbackCoordinators;

@end
