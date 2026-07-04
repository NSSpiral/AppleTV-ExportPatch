/* Runtime dump - PFAdjustmentStack
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFAdjustmentStack : NSObject <NSCopying, NSFastEnumeration>
{
    NSArray * _adjustments;
    NSOrderedSet * _maskUUIDs;
    unsigned int _formatVersion;
}

+ (char)isValidEnvelopeDictionary:(NSDictionary *)arg0 errors:(NSMutableArray *)arg1;

- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (unsigned int)count;
- (PFAdjustmentStack *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (PFAdjustmentStack *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSDictionary *)envelopeDictionary;
- (PFAdjustmentStack *)initWithEnvelopeDictionary:(NSDictionary *)arg0;
- (PFAdjustmentStack *)initWithAdjustments:(NSArray *)arg0;
- (NSObject *)adjustmentAtIndex:(unsigned int)arg0;
- (NSString *)firstAdjustmentWithIdentifier:(NSString *)arg0;
- (NSString *)adjustmentsWithIdentifier:(NSString *)arg0;
- (NSOrderedSet *)maskUUIDs;

@end
