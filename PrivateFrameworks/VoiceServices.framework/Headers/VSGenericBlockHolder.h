/* Runtime dump - VSGenericBlockHolder
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSGenericBlockHolder : NSObject <VSGenericUpdate>
{
    id _block;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (VSGenericBlockHolder *)initWithBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)invokeUpdateWithObject:(NSObject *)arg0;

@end
