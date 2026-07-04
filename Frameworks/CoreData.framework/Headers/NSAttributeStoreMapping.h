/* Runtime dump - NSAttributeStoreMapping
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSAttributeStoreMapping : NSPropertyStoreMapping
{
    int _externalType;
    unsigned int _externalPrecision;
    int _externalScale;
}

- (NSObject *)sqlType;
- (void)setExternalType:(int)arg0;
- (void)setExternalPrecision:(unsigned int)arg0;
- (void)setExternalScale:(int)arg0;
- (int)externalType;
- (unsigned int)externalPrecision;
- (int)externalScale;
- (NSString *)attribute;
- (NSObject *)columnDefinition;
- (char)isEqual:(NSObject *)arg0;
- (NSAttributeStoreMapping *)initWithProperty:(NSString *)arg0;

@end
