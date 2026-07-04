/* Runtime dump - TSCH3DShaderArrayElementVariable
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderArrayElementVariable : TSCH3DShaderVariable <TSCHUnretainedParent>
{
    TSCH3DShaderVariable * mParent;
    unsigned int mIndex;
}

+ (TSCH3DShaderArrayElementVariable *)variableWithParentVariable:(id)arg0 index:(unsigned int)arg1;

- (void)clearParent;
- (TSCH3DShaderArrayElementVariable *)initWithParentVariable:(id)arg0 index:(unsigned int)arg1;
- (void)dealloc;

@end
