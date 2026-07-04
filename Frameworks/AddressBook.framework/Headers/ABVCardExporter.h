/* Runtime dump - ABVCardExporter
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardExporter : NSObject

+ (NSArray *)_vCard21RepresentationOfRecords:(NSArray *)arg0;
+ (NSArray *)_vCard30RepresentationOfRecords:(NSArray *)arg0;
+ (NSArray *)vCardRepresentationOfRecords:(NSArray *)arg0 mode:(int)arg1;
+ (NSObject *)vCardRepresentationOfRecord:(void *)arg0 mode:(int)arg1;

@end
