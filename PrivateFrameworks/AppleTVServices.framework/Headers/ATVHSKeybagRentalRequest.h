/* Runtime dump - ATVHSKeybagRentalRequest
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSKeybagRentalRequest : NSObject
{
    <ATVHSKeybagRentalOperation> * _rentalOperation;
    id _completion;
}

@property (retain, nonatomic) <ATVHSKeybagRentalOperation> * rentalOperation;
@property (copy, nonatomic) id completion;

- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (ATVHSKeybagRentalRequest *)initWithRentalOperation:(<ATVHSKeybagRentalOperation> *)arg0 completion:(id /* block */)arg1;
- (<ATVHSKeybagRentalOperation> *)rentalOperation;
- (void)setRentalOperation:(<ATVHSKeybagRentalOperation> *)arg0;

@end
