/* Runtime dump - TSCH3DUniformArrayShaderVariables
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DUniformArrayShaderVariables : NSObject
{
    NSString * mPrefix;
    NSMutableDictionary * mVariables;
    unsigned int mArraySize;
}

@property (readonly, nonatomic) unsigned int arraySize;

+ (NSString *)variablesWithPrefix:(NSString *)arg0 arraySize:(unsigned int)arg1;

- (TSCH3DUniformArrayShaderVariables *)initWithPrefix:(NSString *)arg0 arraySize:(unsigned int)arg1;
- (void)addArrayName:(NSString *)arg0 type:(struct NSString *)arg1;
- (unsigned int)arraySize;
- (void)addUniformsToShaderProgram:(id)arg0 size:(unsigned int)arg1;
- (NSObject *)variableAtIndex:(unsigned int)arg0 name:(NSString *)arg1;
- (NSString *)p_formatVariableName:(NSString *)arg0;
- (void)setVariable:(NSISVariable *)arg0 forName:(NSString *)arg1;
- (NSString *)variableForName:(NSString *)arg0;
- (void)dealloc;

@end
