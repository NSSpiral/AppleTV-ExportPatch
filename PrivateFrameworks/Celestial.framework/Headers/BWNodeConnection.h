/* Runtime dump - BWNodeConnection
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer>
{
    BWNodeInput * _input;
    BWNodeOutput * _output;
    BWPipelineStage * _pipelineStage;
}

@property (readonly) BWNodeInput * input;
@property (readonly) BWNodeOutput * output;
@property (readonly) BWPipelineStage * pipelineStage;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (BWNodeConnection *)_requirementsArrayForInputByResolvingPassthroughTree:(id)arg0;

- (BWNodeOutput *)output;
- (void)dealloc;
- (BWNodeInput *)input;
- (char)detach;
- (char)attach;
- (void)consumeMessage:(NSString *)arg0 fromOutput:(NSObject *)arg1;
- (BWNodeConnection *)initWithOutput:(BWNodeOutput *)arg0 input:(BWNodeInput *)arg1 pipelineStage:(BWPipelineStage *)arg2;
- (BWPipelineStage *)pipelineStage;
- (char)resolveCommonBufferFormat;

@end
