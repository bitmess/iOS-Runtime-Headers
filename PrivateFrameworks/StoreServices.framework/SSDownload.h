/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSData, SSDownloadMetadata, SSDownloadStatus;

@interface SSDownload : NSObject {
    NSArray *_assets;
    id _identifier;
    BOOL _loadingThumbnailData;
    SSDownloadMetadata *_metadata;
    SSDownloadStatus *_status;
    NSData *_thumbnailImageData;
}

@property(retain) NSArray * assets;
@property(readonly) id downloadIdentifier;
@property(getter=isExternal,readonly) BOOL external;
@property(copy) SSDownloadMetadata * metadata;
@property(retain) SSDownloadStatus * status;

- (void)_artworkFailedNotification:(id)arg1;
- (void)_artworkFinishedNotification:(id)arg1;
- (void)_daemonExited:(id)arg1;
- (void)_mainThreadDaemonExited:(id)arg1;
- (BOOL)_requestThumbnailData;
- (void)_setDownloadIdentifier:(id)arg1;
- (BOOL)_shouldObserveArtworkNotification:(id)arg1;
- (void)_startWatchingDaemon;
- (void)_stopWatchingDaemon;
- (id)assets;
- (id)copyPropertyListEncoding;
- (void)dealloc;
- (id)downloadIdentifier;
- (id)init;
- (id)initWithAssets:(id)arg1 metadata:(id)arg2;
- (id)initWithPropertyListEncoding:(id)arg1;
- (BOOL)isExternal;
- (BOOL)loadThumbnailImageData;
- (id)metadata;
- (void)pause;
- (void)resume;
- (void)setAssets:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;
- (id)thumbnailImageData;

@end