/* Runtime dump - TSCH3DShaderVariable
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderVariable : NSObject <NSCopying>
{
    NSString * mName;
    struct NSString * mType;
    struct NSString * mPrecision;
    unsigned int mArraySize;
    struct TSCH3DShaderType mShaderType;
    char mIsSpecial;
    TSCH3DShaderVariable * mGenericName;
    NSArray * mElements;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSString * type;
@property (readonly, nonatomic) NSString * precision;
@property (readonly, nonatomic) struct TSCH3DShaderType shaderType;
@property (readonly, nonatomic) struct TSCH3DShaderType initialLinkType;
@property (readonly, nonatomic) TSCH3DShaderVariable * genericName;
@property (readonly, nonatomic) char isSpecial;
@property (readonly, nonatomic) unsigned int arraySize;

+ (NSString *)variableWithName:(NSString *)arg0 type:(struct NSString *)arg1 precision:(struct NSString *)arg2 arraySize:(unsigned int)arg3 shaderType:(struct TSCH3DShaderType)arg4 isSpecial:(char)arg5 generic:(id)arg6;

- (unsigned int)arraySize;
- (TSCH3DShaderVariable *)initWithName:(NSString *)arg0 type:(struct NSString *)arg1 precision:(struct NSString *)arg2 arraySize:(unsigned int)arg3 shaderType:(struct TSCH3DShaderType)arg4 isSpecial:(char)arg5 generic:(id)arg6;
- (NSObject *)variableAtIndex:(unsigned int)arg0;
- (struct TSCH3DShaderType)shaderType;
- (char)isSpecial;
- (TSCH3DShaderVariable *)genericName;
- (struct TSCH3DShaderType)initialLinkType;
- (struct NSString *)precision;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (struct NSString *)type;
- (TSCH3DShaderVariable *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;

@end
