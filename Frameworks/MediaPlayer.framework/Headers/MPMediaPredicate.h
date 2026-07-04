/* Runtime dump - MPMediaPredicate
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPredicate : NSObject <MPPProtobufferCoding, NSSecureCoding>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (MPMediaPredicate *)initWithProtobufferDecodableObject:(NSObject *)arg0;
- (NSObject *)protobufferEncodableObject;
- (char)evaluateEntity:(NSObject *)arg0;
- (MPMediaPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;

@end
