//
//  AMCollectionViewCell.h
//  Lezione2_a
//
//  Created by Andrea Maschio on 02/03/14.
//  Copyright (c) 2014 2AM Code. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AMCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UILabel *myTextLabel;
@property (weak, nonatomic) IBOutlet UIImageView *myImageView;

@end
