//
//  StateCollectionViewCell.h
//  StateFlags
//
//  Created by Laura Gongaware on 7/12/22.
//

#import <UIKit/UIKit.h>
#import "State.h"

NS_ASSUME_NONNULL_BEGIN

@interface StateCollectionViewCell : UICollectionViewCell
//var state: State? {
// didSet{
//updateViews()
//}
//

@property (nonatomic, strong, nonnull) State *state;
@property (weak, nonatomic) IBOutlet UIImageView *flagImage;
@property (weak, nonatomic) IBOutlet UILabel *stateLabel;


@end

NS_ASSUME_NONNULL_END
