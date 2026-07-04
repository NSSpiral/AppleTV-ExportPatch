/* Runtime dump - SARadarAceRadarAttachment
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARadarAceRadarAttachment : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSData * contents;
@property (copy, nonatomic) NSString * fileName;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)aceRadarAttachment;
+ (NSDictionary *)aceRadarAttachmentWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)fileName;
- (NSString *)groupIdentifier;
- (NSData *)contents;
- (void)setContents:(NSData *)arg0;
- (void)setFileName:(NSString *)arg0;
- (NSString *)encodedClassName;

@end
