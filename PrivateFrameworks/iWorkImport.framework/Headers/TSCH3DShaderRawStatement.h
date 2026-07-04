/* Runtime dump - TSCH3DShaderRawStatement
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderRawStatement : NSObject <TSCH3DShaderStatement>
{
    NSString * mString;
    struct TSCH3DShaderType mLinkageType;
}

@property (readonly, nonatomic) NSString * string;
@property (nonatomic) struct TSCH3DShaderType linkageType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)statementWithString:(NSString *)arg0 linkageType:(struct TSCH3DShaderType)arg1;

- (void)setLinkageType:(struct TSCH3DShaderType)arg0;
- (struct TSCH3DShaderType)linkageType;
- (void)setGeneratedForType:(struct TSCH3DShaderType)arg0;
- (TSCH3DShaderRawStatement *)initWithString:(NSString *)arg0 linkageType:(struct TSCH3DShaderType)arg1;
- (void)dealloc;
- (NSString *)string;
- (void).cxx_construct;
- (id)resolve;
- (char)isLinked;

@end
