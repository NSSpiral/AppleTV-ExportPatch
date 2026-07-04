/* Runtime dump - SAMPAceMediaEntityWrapsAceSongWrap
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPAceMediaEntityWrapsAceSongWrap : SAMPSong <SASyncWrap>

@property (copy, nonatomic) NSNumber * generation;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSURL * identifier;

+ (SAMPAceMediaEntityWrapsAceSongWrap *)aceMediaEntityWrapsAceSongWrap;
+ (NSDictionary *)aceMediaEntityWrapsAceSongWrapWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setGeneration:(NSNumber *)arg0;
- (NSNumber *)generation;
- (NSString *)encodedClassName;

@end
