/* Runtime dump - TSSPropertySetChangeDetails
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSPropertySetChangeDetails : NSObject
{
    TSSMutablePropertySet * mChangedProperties;
}

- (TSSPropertySetChangeDetails *)initWithChangedProperties:(unsigned int)arg0;
- (void)addChangedProperties:(NSDictionary *)arg0;
- (unsigned int)changedProperties;
- (void)dealloc;
- (TSSPropertySetChangeDetails *)init;
- (void)addChangedProperty:(int)arg0;

@end
