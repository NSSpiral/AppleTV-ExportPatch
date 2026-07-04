/* Runtime dump - MSVCLIBlockHandler
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVCLIBlockHandler : NSObject
{
    id _block;
}

@property (readonly, nonatomic) id block;

- (MSVCLIBlockHandler *)initWithBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)invokeWithCommand:(NSObject *)arg0;
- (id /* block */)block;

@end
