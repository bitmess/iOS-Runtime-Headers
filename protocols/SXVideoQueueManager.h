/* Generated by RuntimeBrowser.
 */

@protocol SXVideoQueueManager <NSObject>

@required

- (void)addModifier:(id <SXVideoQueueModifying>)arg1;
- (void)removeModifier:(id <SXVideoQueueModifying>)arg1;
- (void)replaceCurrentQueueWithQueue:(id <SXVideoQueue>)arg1;

@end
