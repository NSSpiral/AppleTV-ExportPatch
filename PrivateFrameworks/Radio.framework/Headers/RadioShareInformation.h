/* Runtime dump - RadioShareInformation
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioShareInformation : NSObject <NSCopying>
{
    RadioArtworkCollection * _artworkCollection;
    NSString * _messageMIMEType;
    NSString * _message;
    NSString * _subject;
    NSURL * _URL;
}

@property (readonly, copy, nonatomic) RadioArtworkCollection * artworkCollection;
@property (readonly, copy, nonatomic) NSString * messageMIMEType;
@property (readonly, copy, nonatomic) NSString * message;
@property (readonly, copy, nonatomic) NSString * subject;
@property (readonly, retain, nonatomic) NSURL * URL;

- (RadioShareInformation *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)message;
- (NSURL *)URL;
- (void).cxx_destruct;
- (NSString *)subject;
- (RadioArtworkCollection *)artworkCollection;
- (NSURLResponse *)_initWithShareInfoResponse:(CKShareInfo *)arg0;
- (NSString *)messageMIMEType;

@end
