/* Runtime dump - TSCH3DLightUniformArrayShaderVariables
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLightUniformArrayShaderVariables : NSObject
{
    TSCH3DUniformArrayShaderVariables * mVariables;
}

- (void)initializeArrayVariables;
- (unsigned int)arraySize;
- (void)addUniformsToShaderProgram:(id)arg0 size:(unsigned int)arg1;
- (NSObject *)variableAtIndex:(unsigned int)arg0 name:(NSString *)arg1;
- (void)initializePrefix:(NSString *)arg0;
- (void)dealloc;

@end
