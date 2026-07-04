/* Runtime dump - SAWebImageResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebImageResult : SAWebWebResult

@property (copy, nonatomic) NSNumber * fileSize;
@property (retain, nonatomic) SAWebAcePicture * picture;
@property (copy, nonatomic) NSArray * thumbNails;

+ (NSObject *)imageResult;
+ (NSDictionary *)imageResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setPicture:(SAWebAcePicture *)arg0;
- (SAWebAcePicture *)picture;
- (NSNumber *)fileSize;
- (void)setFileSize:(NSNumber *)arg0;
- (NSString *)encodedClassName;
- (NSArray *)thumbNails;
- (void)setThumbNails:(NSArray *)arg0;

@end
