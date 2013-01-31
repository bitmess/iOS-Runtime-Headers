/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class TIMecabraWrapper, UIKeyboardCandidate;

@interface TIWordSearchOperationAcceptCandidate : TIWordSearchOperation  {
    TIMecabraWrapper *_mecabraWrapper;
    UIKeyboardCandidate *_candidate;
    BOOL _partialCandidate;
}

@property(retain) TIMecabraWrapper * mecabraWrapper;
@property(retain) UIKeyboardCandidate * candidate;
@property(getter=isPartialCandidate) BOOL partialCandidate;


- (void)setPartialCandidate:(BOOL)arg1;
- (void)setCandidate:(id)arg1;
- (void)setMecabraWrapper:(id)arg1;
- (BOOL)isPartialCandidate;
- (void)perform;
- (id)initWithWordSearch:(id)arg1 candidate:(id)arg2 isPartial:(BOOL)arg3;
- (void)cancel;
- (id)mecabraWrapper;
- (id)candidate;
- (void)dealloc;

@end