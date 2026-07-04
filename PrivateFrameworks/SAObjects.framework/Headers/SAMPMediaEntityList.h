/* Runtime dump - SAMPMediaEntityList
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPMediaEntityList : SAAbstractItemList

@property (nonatomic) int mediaType;
@property (retain, nonatomic) SAMPCollection * parentCollection;

+ (NSArray *)mediaEntityList;
+ (NSDictionary *)mediaEntityListWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (int)mediaType;
- (void)setMediaType:(int)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (SAMPCollection *)parentCollection;
- (void)setParentCollection:(SAMPCollection *)arg0;

@end
