/* Runtime dump - EDRun
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDRun : NSObject <EDKeyedObject>
{
    EDResources * mResources;
    unsigned int mCharIndex;
    unsigned int mFontIndex;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)runWithCharIndex:(unsigned int)arg0 font:(UIFont *)arg1 resources:(NSArray *)arg2;
+ (NSObject *)runWithCharIndex:(unsigned int)arg0 fontIndex:(unsigned int)arg1 resources:(NSArray *)arg2;
+ (NSArray *)runWithResources:(NSArray *)arg0;

- (char)isEqual:(NSObject *)arg0;
- (int)key;
- (void)setFont:(UIFont *)arg0;
- (UIFont *)font;
- (unsigned int)charIndex;
- (void)setFontIndex:(unsigned int)arg0;
- (EDRun *)initWithResources:(NSArray *)arg0;
- (unsigned int)fontIndex;
- (EDRun *)initWithCharIndex:(unsigned int)arg0 font:(UIFont *)arg1 resources:(NSArray *)arg2;
- (char)isEqualToRun:(id)arg0;
- (void)setCharIndex:(unsigned int)arg0;
- (EDRun *)initWithCharIndex:(unsigned int)arg0 fontIndex:(unsigned int)arg1 resources:(NSArray *)arg2;
- (void)adjustIndex:(unsigned int)arg0;

@end
