/* Runtime dump - TSPDataAttributes
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataAttributes : NSObject <NSCopying>

+ (NSString *)newDataAttributesWithMessage:(struct DataAttributes *)arg0;
+ (TSPDataAttributes *)_classRegistry;
+ (void)registerDataAttributesClass:(Class)arg0 forExtensionNumber:(int)arg1;

- (void)saveToMessage:(struct DataAttributes *)arg0;
- (TSPDataAttributes *)copyWithZone:(struct _NSZone *)arg0;
- (TSPDataAttributes *)initWithMessage:(struct DataAttributes *)arg0;

@end
