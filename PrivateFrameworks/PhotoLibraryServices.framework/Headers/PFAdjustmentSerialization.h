/* Runtime dump - PFAdjustmentSerialization
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFAdjustmentSerialization : NSObject

+ (NSDictionary *)serializeDictionary:(NSDictionary *)arg0 error:(id *)arg1;
+ (NSData *)deserializeDictionaryFromData:(NSData *)arg0 error:(id *)arg1;
+ (PFAdjustmentSerialization *)serializeAdjustments:(id)arg0 error:(id *)arg1;
+ (NSData *)deserializeAdjustmentsFromData:(NSData *)arg0 error:(id *)arg1;
+ (char)validateArchive:(id)arg0 containsEntryWithKey:(NSString *)arg1 ofType:(Class)arg2 errors:(NSMutableArray *)arg3;
+ (char)validateValue:(id *)arg0 isOfType:(Class)arg1 errors:(NSMutableArray *)arg2;

@end
