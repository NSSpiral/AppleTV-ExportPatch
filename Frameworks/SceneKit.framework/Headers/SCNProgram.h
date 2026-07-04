/* Runtime dump - SCNProgram
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNProgram : NSObject <NSCopying, NSSecureCoding>
{
    id _reserved;
    NSString * _vertexShader;
    NSString * _fragmentShader;
    NSString * _name;
    id _delegate;
    NSMutableDictionary * _semanticInfos;
    char _opaque;
}

@property (copy, nonatomic) NSString * vertexShader;
@property (copy, nonatomic) NSString * fragmentShader;
@property (nonatomic) char opaque;
@property (nonatomic) <SCNProgramDelegate> * delegate;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNProgram *)program;
+ (char)supportsSecureCoding;

- (void)setVertexShader:(NSString *)arg0;
- (void)setFragmentShader:(NSString *)arg0;
- (NSString *)vertexShader;
- (NSString *)fragmentShader;
- (void)setSemanticInfos:(NSMutableDictionary *)arg0;
- (void)setSemantic:(NSString *)arg0 forSymbol:(NSString *)arg1 options:(NSDictionary *)arg2;
- (NSString *)semanticForSymbol:(NSString *)arg0;
- (void)_customEncodingOfSCNProgram:(id)arg0;
- (void)_customDecodingOfSCNProgram:(id)arg0;
- (id)_optionsForSymbol:(id)arg0;
- (id)_allSymbolsWithSceneKitSemantic;
- (void)setSemantic:(NSString *)arg0 forSymbol:(WDSymbol *)arg1;
- (void)setOpaque:(char)arg0;
- (void)dealloc;
- (SCNProgram *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<SCNProgramDelegate> *)arg0;
- (SCNProgram *)init;
- (SCNProgram *)copy;
- (<SCNProgramDelegate> *)delegate;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (SCNProgram *)copyWithZone:(struct _NSZone *)arg0;
- (char)isOpaque;

@end
