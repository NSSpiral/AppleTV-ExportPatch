/* Runtime dump - TSCH3DShaderEffectsStates
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderEffectsStates : NSObject
{
    NSMutableDictionary * mObjects;
}

- (void)setValueState:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSString *)valueStateForKey:(NSString *)arg0;
- (NSDictionary *)stateForStateInfo:(NSDictionary *)arg0 createIfNil:(char)arg1;
- (void)setState:(NSObject *)arg0 forStateInfo:(NSDictionary *)arg1;
- (void)dealloc;
- (TSCH3DShaderEffectsStates *)init;
- (NSString *)description;
- (void)clear;

@end
