/* Runtime dump - OADTableBackground
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableBackground : NSObject <OADEffectsParent>
{
    OADFill * mFill;
    NSArray * mEffects;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (EDFill *)fill;
- (void)setFill:(TSDFill *)arg0;
- (NSArray *)effects;
- (void)setEffects:(NSArray *)arg0;
- (char)hasEffects;

@end
