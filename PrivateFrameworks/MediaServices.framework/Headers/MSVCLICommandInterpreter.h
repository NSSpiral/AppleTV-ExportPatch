/* Runtime dump - MSVCLICommandInterpreter
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVCLICommandInterpreter : NSObject
{
    NSMutableDictionary * _commandToInvocationsMap;
    NSMutableArray * _retainedBlockHandlers;
}

- (MSVCLICommandInterpreter *)init;
- (void).cxx_destruct;
- (void)addHandlerToCommand:(NSObject *)arg0 withTarget:(NSObject *)arg1 action:(SEL)arg2;
- (void)addHandlerToCommand:(NSObject *)arg0 withBlock:(id /* block */)arg1;
- (char)executeWithArgumentCount:(int)arg0 arguments:(char * *)arg1;

@end
