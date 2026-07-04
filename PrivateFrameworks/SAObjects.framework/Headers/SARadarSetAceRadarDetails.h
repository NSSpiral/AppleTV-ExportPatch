/* Runtime dump - SARadarSetAceRadarDetails
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARadarSetAceRadarDetails : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * attachments;
@property (copy, nonatomic) NSString * clientConfiguration;
@property (copy, nonatomic) NSString * radarTitle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SARadarSetAceRadarDetails *)setAceRadarDetails;
+ (NSDictionary *)setAceRadarDetailsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)attachments;
- (void)setAttachments:(NSArray *)arg0;
- (NSString *)clientConfiguration;
- (void)setClientConfiguration:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSString *)radarTitle;
- (void)setRadarTitle:(NSString *)arg0;

@end
