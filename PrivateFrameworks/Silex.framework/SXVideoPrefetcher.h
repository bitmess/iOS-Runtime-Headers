/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoPrefetcher : NSObject <SXVideoPrefetcher> {
    <SXVideoBufferObserving> * _bufferObserver;
    <SXVideoLoadingProgressObserving> * _loadingProgressObserver;
    <SXVideoLoadingStateObserving> * _loadingStateObserver;
    <SXVideoPlaybackProgressObserving> * _playbackProgressObserver;
    unsigned long long  _prefetchPolicy;
    <SXVideoPrefetching> * _prefetchableVideo;
}

@property (nonatomic, readonly) <SXVideoBufferObserving> *bufferObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXVideoLoadingProgressObserving> *loadingProgressObserver;
@property (nonatomic, readonly) <SXVideoLoadingStateObserving> *loadingStateObserver;
@property (nonatomic, readonly) <SXVideoPlaybackProgressObserving> *playbackProgressObserver;
@property (nonatomic, readonly) unsigned long long prefetchPolicy;
@property (nonatomic, readonly) <SXVideoPrefetching> *prefetchableVideo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bufferObserver;
- (id)initWithPrefetchPolicy:(unsigned long long)arg1 prefetchableVideo:(id)arg2 bufferObserver:(id)arg3 loadingStateObserver:(id)arg4 loadingProgressObserver:(id)arg5 playbackProgressObserver:(id)arg6;
- (id)loadingProgressObserver;
- (id)loadingStateObserver;
- (id)playbackProgressObserver;
- (unsigned long long)prefetchPolicy;
- (id)prefetchableVideo;
- (void)prefetchingConditionsChanged;

@end
