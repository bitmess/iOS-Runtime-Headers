/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXRecipeEvaluation : NSObject

+ (id)evaluateRecipe:(id)arg1 recordData:(id)arg2;
+ (id)inputScoresFromItem:(struct { double x1[153]; double x2; }*)arg1;
+ (double)kendallTauFirstItems:(struct { double x1[153]; double x2; }*)arg1 secondItems:(struct { double x1[153]; double x2; }*)arg2 count:(unsigned long long)arg3;
+ (unsigned long long)rankOfScore:(double)arg1 inputItems:(struct { double x1[153]; double x2; }*)arg2 count:(unsigned long long)arg3;

@end
