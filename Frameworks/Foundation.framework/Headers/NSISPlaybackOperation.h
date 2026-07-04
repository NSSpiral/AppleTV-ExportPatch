/* Runtime dump - NSISPlaybackOperation
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISPlaybackOperation : NSObject <NSISVariableDelegate>
{
    NSMutableDictionary * oldIdentsToNewVariables;
    NSMutableSet * variablesToIntegralize;
    NSMutableSet * userObservableVariables;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (id)unwrapVariable:(id)arg0;
- (NSObject *)unwrapLinearExpression:(NSObject *)arg0;
- (void)playbackOneAction:(NSObject *)arg0 onEngine:(AVAudioEngine *)arg1;
- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(VKAnnotationMarker *)arg0;
- (void)dealloc;
- (NSISPlaybackOperation *)init;
- (void)nsis_valueOfVariable:(id)arg0 didChangeInEngine:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg0;
- (char)nsis_shouldIntegralizeVariable:(id)arg0;
- (char)nsis_valueOfVariableIsUserObservable:(id)arg0;

@end
