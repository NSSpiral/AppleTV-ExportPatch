/* Runtime dump - TSCH3DSelectionPathRenderInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSelectionPathRenderInfo : NSObject
{
    NSString * mString;
    unsigned int mStyleIndex;
    float mRotation;
}

@property (readonly, nonatomic) NSString * string;
@property (readonly, nonatomic) unsigned int styleIndex;
@property (readonly, nonatomic) float rotation;

+ (NSString *)renderInfoWithString:(NSString *)arg0 styleIndex:(unsigned int)arg1 rotation:(float)arg2;

- (TSCH3DSelectionPathRenderInfo *)initWithString:(NSString *)arg0 styleIndex:(unsigned int)arg1 rotation:(float)arg2;
- (void)dealloc;
- (NSString *)string;
- (float)rotation;
- (unsigned int)styleIndex;

@end
