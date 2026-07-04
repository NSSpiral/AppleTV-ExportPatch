/* Runtime dump - EDTableStyleElement
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying>
{
    EDCollection * mDifferentialStyles;
    int mType;
    unsigned int mBandSize;
    EDDifferentialStyle * mDifferentialStyle;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)tableStyleElementWithResources:(NSArray *)arg0;

- (void)dealloc;
- (int)key;
- (void)setType:(int)arg0;
- (int)type;
- (EDTableStyleElement *)copyWithZone:(struct _NSZone *)arg0;
- (EDTableStyleElement *)initWithResources:(NSArray *)arg0;
- (NSObject *)differentialStyle;
- (void)setDifferentialStyle:(NSObject *)arg0;
- (unsigned int)bandSize;
- (void)setBandSize:(unsigned int)arg0;
- (void)setDifferentialStyleWithIndex:(unsigned int)arg0;

@end
